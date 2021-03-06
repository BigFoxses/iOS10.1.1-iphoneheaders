/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, SBIconModel;

@interface SBIconPreviousLocationTracker : NSObject {

	NSMapTable* _previousIconLocations;
	SBIconModel* _iconModel;

}

@property (nonatomic,retain) SBIconModel * iconModel;              //@synthesize iconModel=_iconModel - In the implementation block
-(void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2 ;
-(id)previousLocationInfoForIcon:(id)arg1 ;
-(SBIconModel *)iconModel;
-(void)setIconModel:(SBIconModel *)arg1 ;
@end

