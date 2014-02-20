//
//  AddItemViewController.h
//  Checklist
//
//  Created by blur on 14-2-20.
//  Copyright (c) 2014年 blur. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddItemViewController : UITableViewController

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;

@end
