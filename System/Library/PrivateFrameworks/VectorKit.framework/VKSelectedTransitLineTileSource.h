/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTransitLineTileSource.h>
#import <libobjc.A.dylib/GEOTileRequesterDelegate.h>

@class NSMutableArray;

@interface VKSelectedTransitLineTileSource : VKTransitLineTileSource <GEOTileRequesterDelegate> {

	unsigned long long _selectedLineIDSequenceCounter;
	unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >* _selectedLineIDs;
	unsigned _maxZ;
	NSMutableArray* _inProgress;

}

@property (assign,nonatomic) const unordered_set<unsigned long long* selectedLineIDs;              //@synthesize selectedLineIDs=_selectedLineIDs - In the implementation block
@property (assign,nonatomic) unsigned maxZ;                                                        //@synthesize maxZ=_maxZ - In the implementation block
-(void)dealloc;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)setMaxZ:(unsigned)arg1 ;
-(void)setSelectedLineIDs:(const unordered_set<unsigned long long*)arg1 ;
-(id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 labelExternalObjectsModerator:(LabelExternalObjectsModerator*)arg5 transitLineSharedResources:(const shared_ptr<const md::TransitLineSharedResources>*)arg6 ;
-(unsigned long long)mapLayerForZoomLevelRange;
-(id)_extraInfoForPendingSourceKey:(const VKTileKey*)arg1 ;
-(BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(void)performDownload:(const GEOTileKey*)arg1 ;
-(const unordered_set<unsigned long long*)selectedLineIDs;
-(unsigned)maxZ;
@end

