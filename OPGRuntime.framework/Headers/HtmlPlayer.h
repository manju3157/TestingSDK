//
//  HtmlPlayer.h
//  OnePoint.Runtime
//
//  Created by Varahala Babu on 22/12/14.
//  Copyright (c) 2014 OnePointGlobal. All rights reserved.
//

#import "HtmlUiControl.h"
#import "IPlayer.h"
#import "IosRuntimeInteractor.h"
@class WebApplication;
@class HttpContext;
@class NavigationTypes;
@class Page;
@class Container;
@class WebSession;
@protocol IResponse;
@class Results;
@interface HtmlPlayer : HtmlUiControl<IPlayer>
{
    WebApplication *__application;
    NavigationTypesEnum navType;
    HttpContext *_context;
    Page *__page_;
    NSMutableDictionary *responses;
    id<IosRuntimeInteractor> interactor;
    BOOL flag;
    NSMutableDictionary *appResponse;
    Container *__Resources_;
    NSString *__Goto;
    WebSession *Session;
}
@property(nonatomic,strong)NSMutableDictionary *responses;
-(id)initWithInteractor:(id<IosRuntimeInteractor>)interactor_;
-(id)initWithContext:(HttpContext*)context;
- (id)initWithInterview:(id)interview
   withResouceContainer:(id)resourceContainer
            withContext:(id)context;
-(void)initializeWithInterview:(Interview*) interview withContaier:(Container*)resourceContainer  withType:(int)renderType;
-(HttpContext*)getAppContext;

-(NSString *)getName;

-(Container*)getResources;
-(void)setResources:(Container*)resources;

-(NSMutableDictionary*)getAppResponse;
-(void)setAppResponse:(NSMutableDictionary*)appResp;

-(void)setPage:(Page*)page;
-(Page*)getPage;
-(id)ask:(id<IQuestion>)question;
-(id)ask;
-(id)show:(id<IQuestion>) question;

-(BOOL)getPostBackRequired;
-(BOOL)validate;
-(void)updateContext:(HttpContext *)context;

-(void)UpdateQuestionResponse:(id<IResponse>)response withResult:(Results*)result;
-(NSData*)checkForResource:(NSString*)name;

-(void)checkNavigation:(NSString *)navigationType withValue:(NSString *)value;
-(void)updateUrl:(BOOL)terminate;
-(void)loadTargetPage;
-(void)setGoto:(NSString*)value;
-(NSString*)getGoto;
-(WebSession*)getWebSession;
-(void)setWebSession:(WebSession*)value;

@end
