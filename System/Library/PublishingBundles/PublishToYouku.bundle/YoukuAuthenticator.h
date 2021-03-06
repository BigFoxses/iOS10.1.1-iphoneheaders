/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PublishingBundles/PublishToYouku.bundle/PublishToYouku
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PublishToYouku/PublishToYouku-Structs.h>
#import <VideoUpload/VUAuthenticator.h>

@class NSString, NSDate;

@interface YoukuAuthenticator : VUAuthenticator {

	NSString* _authToken;
	NSString* _refreshToken;
	NSDate* _expireDate;
	BOOL _refreshing;

}
+(id)sharedAuthenticator;
-(CFDictionaryRef)_createKeychainAttributes;
-(void)_clearStoredCredentials;
-(void)_storeCredentials;
-(BOOL)isRefreshNeeded;
-(void)refresh;
-(id)authToken;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
@end

