/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory
-(id)init;
-(void)_removeAllVisitedLinks;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
@end
