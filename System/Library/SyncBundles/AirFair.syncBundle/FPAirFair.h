/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/AirFair.syncBundle/AirFair
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirFair/AirFair-Structs.h>
#import <libobjc.A.dylib/ATClient.h>

@class NSString;

@interface FPAirFair : NSObject <ATClient> {

	unsigned HPD8FhhtYi5OC5SPY;
	unsigned LnGBbUJQLDA;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)wkiHcH3uUYkLWEOOs:(char*)arg1 reqSize:(unsigned)arg2 fileName:(id)arg3 ;
-(BOOL)Jaz0t2BPNjwE;
-(int)MvKgJWHiyPi9jHcCD1zBrVK7F:(id)arg1 bytes:(char**)arg2 size:(unsigned*)arg3 ;
-(int)cIjYbQiRD8mj9H;
-(int)ENaUvadPgTNQtAOA;
-(int)DrFjYlmSKahjfJzgmaPvs:(FairPlayHWInfo_*)arg1 ;
-(int)FVxWQcJol3R;
-(int)U0DV0QxFFjyMatlbDyqSZ4s3d:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)supportedDataclasses;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 grappaID:(unsigned)arg3 hostVersion:(id)arg4 error:(id*)arg5 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
@end

