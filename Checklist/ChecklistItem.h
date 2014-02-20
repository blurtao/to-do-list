//
//  ChecklistItem.h
//  Checklist
//
//  Created by blur on 14-2-20.
//  Copyright (c) 2014年 blur. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject

- (void)toggleChecked;

@property(nonatomic, copy)NSString *text;
@property(nonatomic, assign)BOOL checked;

@end
