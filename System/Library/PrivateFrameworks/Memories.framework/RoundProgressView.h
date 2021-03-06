/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIView.h>

@interface RoundProgressView : UIView {

	double _progress;
	double _pieWidth;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double pieWidth;              //@synthesize pieWidth=_pieWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setPieWidth:(double)arg1 ;
-(double)pieWidth;
@end

