/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartElementProperties.h>

@class TSCH3DArray2D, TSCH3DLabelResources, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties {

	TSCH3DArray2D* mLightingModels;
	TSCH3DLabelResources* mLabels;
	TSCH3DTransform* mChartTransform;
	TSCH3DTransform* mElementsTransform;

}

@property (nonatomic,retain) TSCH3DArray2D * lightingModels; 
@property (nonatomic,retain) TSCH3DLabelResources * labels; 
@property (nonatomic,retain) TSCH3DTransform * chartTransform; 
@property (nonatomic,retain) TSCH3DTransform * elementsTransform; 
-(void)setChartTransform:(TSCH3DTransform *)arg1 ;
-(TSCH3DTransform *)chartTransform;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(void)setElementsTransform:(TSCH3DTransform *)arg1 ;
-(TSCH3DTransform *)elementsTransform;
-(TSCH3DArray2D *)lightingModels;
-(void)setLightingModels:(TSCH3DArray2D *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabels:(TSCH3DLabelResources *)arg1 ;
-(TSCH3DLabelResources *)labels;
@end

