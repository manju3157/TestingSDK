//
//  OPGNetworkRequest.h
//  OnePointSDK
//
//  Created by OnePoint Global on 30/08/16.
//  Copyright © 2016 OnePointGlobal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OPGNetworkRequest : NSObject
/*!
 This method creates a NSMutableRequest to access the server api.
 */
-(NSMutableURLRequest *)createRequest:(NSMutableDictionary *)values
                               forApi:(NSString *)apiName;

/*!
 This method creates a NSMutableRequest to download media from the server.
 */
-(NSMutableURLRequest *)createRequestForMediaForApi:(NSString *)apiName;

/*!
 This method executes the request and return json response.
 */
-(id) performRequest:(NSMutableURLRequest *)request
           withError:(NSError **)errorDomain;

/*!
 This method performs upload request and deletes the file after successful upload, it is used in syncing offline survey results to server.
 */
-(BOOL)performUploadFile:(NSMutableURLRequest *)request
                filePath:(NSString *)filePath
                fileName:(NSString *)fileName
                withError:(NSError **)errorDomain;

@end
