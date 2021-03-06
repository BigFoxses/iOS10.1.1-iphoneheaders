/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, PKPass, PKPassColorProfile, PKPassBucketTemplate, NSArray;

@interface PKPassBucketView : UIView {

	NSMutableArray* _fieldViews;
	long long _background;
	PKPass* _pass;
	PKPassColorProfile* _colorProfile;
	PKPassBucketTemplate* _bucketTemplate;
	NSArray* _bucket;

}

@property (nonatomic,retain) PKPass * pass;                                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                  //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,retain) PKPassBucketTemplate * bucketTemplate;              //@synthesize bucketTemplate=_bucketTemplate - In the implementation block
@property (nonatomic,retain) NSArray * bucket;                                   //@synthesize bucket=_bucket - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(id)description;
-(void)_updateSubviews;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(PKPassColorProfile *)colorProfile;
-(PKPassBucketTemplate *)bucketTemplate;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBucketTemplate:(PKPassBucketTemplate *)arg1 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(void)setBucket:(NSArray *)arg1 ;
-(long long)_backgroundForBucketTemplate:(id)arg1 ;
-(void)_measureAndFitEvenlySizedSubviews;
-(void)_measureAndFitVariablySizedSubviews;
-(id)_fieldViewsByWidth;
-(void)_presentRecursiveDiff:(id)arg1 inView:(id)arg2 forSubviewAtIndex:(unsigned long long)arg3 withSubviews:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSArray *)bucket;
@end

