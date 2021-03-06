/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAccount, SSDatabaseCache, SSAppPurchaseHistoryDatabase;

@interface SSAppPurchaseHistoryCache : NSObject {

	SSAccount* _account;
	SSDatabaseCache* _databaseCache;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(id)allUncachedImages:(id)arg1 ;
-(id)allUncachedImages;
-(void)clearCacheForAdamID:(id)arg1 ;
-(BOOL)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3 ;
-(id)imageDataForAdamID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)purgeableSpace;
-(id)initWithAccount:(id)arg1 ;
-(unsigned long long)purge:(unsigned long long)arg1 ;
@end

