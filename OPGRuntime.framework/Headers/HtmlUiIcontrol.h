//
//  HtmlUiIcontrol.h
//  OnePoint.Runtime
//
//  Created by Varahala Babu on 22/12/14.
//  Copyright (c) 2014 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HtmlUiControls;
@class HtmlPage;
@protocol IResponse;
@protocol HtmlUiIcontrol <NSCopying, NSObject>

- (NSString *)getClientId;
- (void)setClientId:(NSString *)value;
- (id<HtmlUiIcontrol>)findControlWithClientID:(NSString *)clientId;
- (id<HtmlUiIcontrol>)findControl:(id)controlType;
- (id<HtmlUiIcontrol>)getParent;
- (void)setParent:(id<HtmlUiIcontrol>)value;
- (void)render:(id<IResponse>)response;
- (HtmlPage*)getPage;
- (void)setPage:(HtmlPage*)value;
- (HtmlUiControls *)getControls;
- (void)setControls:(HtmlUiControls *)value;

@end
