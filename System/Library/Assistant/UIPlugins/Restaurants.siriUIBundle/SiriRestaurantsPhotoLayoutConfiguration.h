/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@interface SiriRestaurantsPhotoLayoutConfiguration : NSObject {

	UIEdgeInsets _insets;
	CGSize _photoSize;
	double _interphotoSpacing;

}
-(double)interphotoSpacing;
-(id)initWithInsets:(UIEdgeInsets)arg1 photoSize:(CGSize)arg2 interphotoSpacing:(double)arg3 ;
-(double)heightForWidth:(double)arg1 numberOfPhotos:(long long)arg2 ;
-(double)unusedHorizontalSpaceForWidth:(double)arg1 ;
-(UIEdgeInsets)insets;
-(long long)_numberOfColumnsForWidth:(double)arg1 ;
-(CGSize)photoSize;
@end

