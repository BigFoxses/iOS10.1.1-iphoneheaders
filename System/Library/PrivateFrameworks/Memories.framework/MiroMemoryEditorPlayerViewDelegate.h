/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroMemoryEditorPlayerViewDelegate <NSObject>
@property (assign,nonatomic) BOOL isSeparatingOrCollapsing; 
@required
-(BOOL)playerViewShouldShowInChildViewControllers;
-(BOOL)isSeparatingOrCollapsing;
-(void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2;
-(id)placeSnapshotOfPlayerViewInContainerView:(id)arg1;
-(void)setIsSeparatingOrCollapsing:(BOOL)arg1;

@end

