/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAssetHandle, NSArray;

@interface FCFlintManifest : NSObject {

	FCAssetHandle* _mainDocumentAssetHandle;
	NSArray* _fontResourceIDs;

}

@property (nonatomic,readonly) FCAssetHandle * mainDocumentAssetHandle;              //@synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle - In the implementation block
@property (nonatomic,readonly) NSArray * fontResourceIDs;                            //@synthesize fontResourceIDs=_fontResourceIDs - In the implementation block
-(id)initWithMainDocumentAssetHandle:(id)arg1 fontResourceIDs:(id)arg2 ;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(NSArray *)fontResourceIDs;
@end

