/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOResourceManifestConfiguration;

@interface VKResourceManager : NSObject {

	GEOResourceManifestConfiguration* _manifestConfiguration;

}
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 ;
-(BOOL)isDevResourceWithName:(id)arg1 ;
-(id)dataForResourceWithName:(id)arg1 ;
-(id)_localNameForResourceName:(id)arg1 ;
@end

