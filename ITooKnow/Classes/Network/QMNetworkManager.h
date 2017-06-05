//
//  QMNetworkManager.h
//  reach-ios
//
//  Created by Admin on 2016-11-30.
//  Copyright © 2016 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CompletionHandler)(BOOL success, id response, NSError *error);

@interface QMNetworkManager : NSObject

@property(nonatomic, strong) AFHTTPSessionManager  *manager;

+ (QMNetworkManager *)sharedManager;

@end

NS_ASSUME_NONNULL_END
