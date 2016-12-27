/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroSliderViewControllerDataSource <NSObject>
@required
-(id)selectedIndexPathForSliderViewController:(id)arg1;
-(unsigned long long)countForSliderViewController:(id)arg1;
-(id)displayNameForIndexPath:(id)arg1 forSliderViewController:(id)arg2;
-(void)sliderViewControllerDidBeginDragging:(id)arg1;
-(void)sliderViewController:(id)arg1 updateSliderPercentage:(float)arg2;
-(void)sliderViewController:(id)arg1 didEndDraggingAtIndexPath:(id)arg2;
-(void)sliderViewController:(id)arg1 setSelectedIndexPath:(id)arg2;

@end
