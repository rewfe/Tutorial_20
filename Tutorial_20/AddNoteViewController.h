//
//  AddNoteViewController.h
//  Tutorial_20
//
//  Created by Admin on 23.05.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddNoteViewController : UITableViewController
- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *noteTextField;


@end
