/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {

	NSMutableDictionary* _imagesCache;

}

@property (readonly) NSMutableDictionary * imagesCache; 
+(id)sharedInstance;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
-(NSMutableDictionary *)imagesCache;
@end
