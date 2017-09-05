//
//  HtmlUiControl.h
//  OnePoint.Runtime
//
//  Created by Varahala Babu on 22/12/14.
//  Copyright (c) 2014 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HtmlUiIcontrol.h"
#import "QueryManager.h"
#import "HtmlUiControls.h"
#import "GDataXMLNode.h"

@class HtmlControl;
@class SubTemplate;
@class Data;
@class Banner;
@class NavButton;
@class ProgressBar;
@class WebRequest;
@class HtmlPage;
@class Form;
@class Literal;
@class NavBar;
@interface HtmlUiControl : NSObject<HtmlUiIcontrol>
{
    NSString *__ClientId_;
    HtmlUiControls *__Controls_;
    NSString *__CssClass_;
    QueryManager *__Arguments_;
    id<HtmlUiIcontrol> __Parent_;
    HtmlPage *__Page_;
    BOOL __Visible_;
    NSString *__BaseClientId_;
}
- (id)init;
- (id)initWithIControl:(id<HtmlUiIcontrol>)parent;
- (id)initWithIControl:(id<HtmlUiIcontrol>)parent
      withQueryManager:(QueryManager *)arguments;
- (NSString *)getClientId;
- (void)setClientId:(NSString *)value;
- (HtmlUiControls *)getControls;
- (void)setControls:(HtmlUiControls *)value;
- (NSString *)getCssClass;
- (void)setCssClass:(NSString *)value;
- (QueryManager *)getArguments;
- (void)setArguments:(QueryManager *)value;
- (id<HtmlUiIcontrol>)getParent;
- (void)setParent:(id<HtmlUiIcontrol>)value;
- (HtmlPage *)getPage;
- (void)setPage:(HtmlPage *)value;
- (BOOL)getVisible;
- (void)setVisible:(BOOL)value;
- (BOOL)getHasControls;
- (NSString *)getBaseClientId;
- (void)setBaseClientId:(NSString *)value;
+ (id<HtmlUiIcontrol>)createWithIControl:(id<HtmlUiIcontrol>)parent
                      withTemplate:(NSString *)template_
                      withIControl:(id<HtmlUiIcontrol>)insertControl;
+ (void)inspectChildren:(id<HtmlUiIcontrol>)parent
           withTemplate:(NSString *)template_;
+(void)inspectChildren:(id<HtmlUiIcontrol>) parent withBool:(BOOL)status xmlNode:(GDataXMLNode*) node  withIControl:(id<HtmlUiIcontrol>)insertControl;
- (id<HtmlUiIcontrol>)findControl:(id)controlType;
- (id<HtmlUiIcontrol>)findControlWithClientID:(NSString *)clientId;
- (id<HtmlUiIcontrol>)findControl:(NSString *)previousClientId
               withClientId:(NSString *)clientId;
- (void)render:(id<IResponse>)response;
- (NSString *)extractControlIdentity:(NSString *)clientId;
//- (id)clone;
- (id)copyWithZone:(NSZone *)zone;
-(NSMutableArray*)findAll:(NSString*)clientId;
+(void)inspectNode:(id<HtmlUiIcontrol>)parent withBool:(BOOL)status xmlNode:(GDataXMLNode*)node insetControl:(id<HtmlUiIcontrol>)control;
+(NSString*)getNodeName:(GDataXMLNode*)node;
+(id<HtmlUiIcontrol>)generateControl:(id<HtmlUiIcontrol>)parent withBool:(BOOL)status XmlNode:(GDataXMLNode*)node  queryManager:(QueryManager*)arguments Control:(id<HtmlUiIcontrol>)insertControl;
+(NSString*)extractControlIdentity:(NSString*)clientID;

@end
