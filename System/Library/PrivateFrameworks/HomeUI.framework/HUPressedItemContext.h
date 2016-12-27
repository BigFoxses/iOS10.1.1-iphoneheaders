/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFItem, HUElasticApplier;

@interface HUPressedItemContext : NSObject {

	BOOL _active;
	HFItem* _item;
	HUElasticApplier* _applier;
	double _beginTime;
	double _rawInputProgress;
	double _currentViewScale;

}

@property (nonatomic,retain) HFItem * item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) HUElasticApplier * applier;               //@synthesize applier=_applier - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double beginTime;                         //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double rawInputProgress;                  //@synthesize rawInputProgress=_rawInputProgress - In the implementation block
@property (assign,nonatomic) double currentViewScale;                  //@synthesize currentViewScale=_currentViewScale - In the implementation block
-(BOOL)isActive;
-(HFItem *)item;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setApplier:(HUElasticApplier *)arg1 ;
-(HUElasticApplier *)applier;
-(double)rawInputProgress;
-(void)setRawInputProgress:(double)arg1 ;
-(double)currentViewScale;
-(void)setCurrentViewScale:(double)arg1 ;
@end
