//
//  HtmlUiControls.h
//  OnePoint.Runtime
//
//  Created by Varahala Babu on 22/12/14.
//  Copyright (c) 2014 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HtmlUiIcontrol.h"
@interface HtmlUiControls : NSObject
{
    NSMutableArray *array;
}
@property(nonatomic,retain) NSMutableArray *array;
- (id)init;
- (id)initWithObjects:(id)objects;
-(NSMutableArray *)getControlsArray;
-(void)setControlsArray:(NSMutableArray *)value;
-(void)clear;
- (void)addObject:(id)anObject;
- (void)insertObject:(id)anObject atIndex:(NSUInteger)index;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)index;
- (void)replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)index;
-(int)getArray;

@end
