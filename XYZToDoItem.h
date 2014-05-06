//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Carl Robben on 7/05/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
