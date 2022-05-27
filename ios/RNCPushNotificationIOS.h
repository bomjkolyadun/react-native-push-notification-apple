/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/RCTEventEmitter.h>
#import <UserNotifications/UserNotifications.h>

extern NSString *const RNCRemoteNotificationReceived;

@interface RNCPushNotificationIOS : RCTEventEmitter

#if TARGET_OS_IOS
typedef void (^RNCRemoteNotificationCallback)(UIBackgroundFetchResult result);
+ (void)didReceiveRemoteNotification:(NSDictionary *)notification fetchCompletionHandler:(RNCRemoteNotificationCallback)completionHandler;
#endif

#if !TARGET_OS_TV
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)notification;
+ (void)didReceiveNotificationResponse:(UNNotificationResponse *)response API_AVAILABLE(ios(10.0));
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
#endif

@end
