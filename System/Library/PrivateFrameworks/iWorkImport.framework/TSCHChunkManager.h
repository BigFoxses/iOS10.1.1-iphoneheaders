/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUWeakReference, TSCHChunkMap;

@interface TSCHChunkManager : NSObject {

	TSUWeakReference* mWeakChart;
	TSCHChunkMap* mCachedChunkMap;

}
+(id)p_makeAllChartDeliveryStylesLocalized:(BOOL)arg1 ;
+(id)p_allLocalizedChartDeliveryStyles;
+(id)p_allNonLocalizedChartDeliveryStyles;
+(id)p_allChartDeliveryStylesLocalized:(BOOL)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(BOOL)hasBackgroundLayerForPieChart;
-(unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)arg1 ;
-(BOOL)lastChunkForSeriesIndex:(unsigned long long)arg1 currentChunk:(unsigned long long)arg2 chunkStyle:(unsigned long long)arg3 ;
-(void)adjustRangeForRep:(id)arg1 chunkIndex:(unsigned long long)arg2 finalTexture:(BOOL)arg3 seriesStart:(long long*)arg4 seriesCount:(long long*)arg5 ;
-(void)adjustRangeForRep:(id)arg1 seriesIndex:(unsigned long long)arg2 chunkIndex:(unsigned long long)arg3 finalTexture:(BOOL)arg4 valueStart:(long long*)arg5 valueCount:(long long*)arg6 ;
-(id)p_createChunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 ;
-(id)p_chart;
-(id)p_chunkMapForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 forceUpdateCache:(BOOL)arg3 ;
-(unsigned long long)p_chunkCountForChart:(id)arg1 chunkStyle:(unsigned long long)arg2 chunkMap:(id)arg3 ;
-(BOOL)p_titleOnForChart:(id)arg1 ;
-(BOOL)p_legendOnForChart:(id)arg1 ;
-(BOOL)p_hasBackgroundFillForChart:(id)arg1 ;
-(BOOL)p_hasBackgroundLayerForPieChartForChart:(id)arg1 ;
-(BOOL)p_isPieForChart:(id)arg1 ;
-(BOOL)p_isMultiDataForChart:(id)arg1 ;
-(id)p_cachedChunkMap;
-(id)p_backgroundStringForChartWithTitle:(id)arg1 ;
-(id)p_seriesNameForSeriesAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2 chart:(id)arg3 ;
-(id)p_nameForMultiDataSetCategory:(unsigned long long)arg1 chart:(id)arg2 ;
-(unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)arg1 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(id)containedTextForChartDeliveryStyle:(unsigned long long)arg1 chunkIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)updateCache:(unsigned long long)arg1 ;
@end
