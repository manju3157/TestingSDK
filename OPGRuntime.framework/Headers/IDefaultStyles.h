//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/IDefaultStyles.java
//
//  Created by ashchauhan on 6/20/14.
//

//#ifndef _IDefaultStyles_H_
//#define _IDefaultStyles_H_
#import <Foundation/Foundation.h>
#import "ICategoryStyles.h"
#import "IQuestionStyles.h"
@protocol IStyle;
@protocol IStyles;



@protocol IDefaultStyles < NSObject>
- (id<ICategoryStyles>)getCategories;
- (id<IStyle>)getDefault;
- (id<IStyles>)getGrids;
- (id<IStyles>)getLabels;
- (id<IStyle>)getNavigation;
- (id<IQuestionStyles>)getQuestions;
@end

