/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;

}
+(id)sharedManagerForTileGroupIdentifier:(unsigned)arg1 ;
+(id)sharedManagerForConfiguration:(id)arg1 ;
+(id)sharedManager;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/id)arg3 ;
-(id)allResourceNames;
@end

