//
//  ChecklistItem.m
//  Checklist
//
//  Created by blur on 14-2-20.
//  Copyright (c) 2014年 blur. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void)toggleChecked{
    self.checked = !self.checked;
}

@end
