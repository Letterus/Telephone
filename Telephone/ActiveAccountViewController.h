//
//  ActiveAccountViewController.h
//  Telephone
//
//  Copyright (c) 2008-2015 Alexey Kuznetsov
//
//  Telephone is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Telephone is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//

#import <Cocoa/Cocoa.h>


// Call destination keys.
extern NSString * const kURI;
extern NSString * const kPhoneLabel;

@class AccountController, AKSIPURI;

// An active account view controller.
@interface ActiveAccountViewController : NSViewController

// Account controller the receiver belongs to.
@property(nonatomic, weak) AccountController *accountController;

// Call destination token field outlet.
@property(nonatomic, weak) IBOutlet NSTokenField *callDestinationField;

// Index of a URI in a call destination token.
@property(nonatomic, assign) NSUInteger callDestinationURIIndex;

// Call destination URI.
@property(nonatomic, readonly, copy) AKSIPURI *callDestinationURI;


// Initializes an ActiveAccountViewController object with a given account controller.
- (instancetype)initWithAccountController:(AccountController *)accountController;

// Makes a call.
- (IBAction)makeCall:(id)sender;

// Changes the active SIP URI index in the call destination token.
- (IBAction)changeCallDestinationURIIndex:(id)sender;

@end
