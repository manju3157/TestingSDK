//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IProperty.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IProperty_H_
//#define _IProperty_H_



#import <Foundation/Foundation.h>
@class ScriptReader;

@protocol IProperty < NSObject>
- (void)copyTo:(id<IProperty>)destination;
- (id<IProperty>)copy ;
- (NSString *)getName;
- (void)setName:(NSString *)value;
- (id)getValue;
- (void)setValue:(id)value;
-(void) deserializeWithStream:(NSData*) stream;
-(void)deserializeWithScriptReader:(ScriptReader*) reader;
-(NSMutableData *)serialize;

@end

// _IProperty_H_
