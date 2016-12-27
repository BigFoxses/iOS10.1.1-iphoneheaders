/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightReceiver.framework/SpotlightReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SpotlightReceiverJob <NSObject>
@required
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchSetupInfoWithCompletionHandler:(/*^block*/id)arg1;
-(void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2 domains:(id)arg3 deletes:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)purgeFromBundle:(id)arg1 identifiers:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
