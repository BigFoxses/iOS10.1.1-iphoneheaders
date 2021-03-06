/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSPObject;

@interface TSKViewState : TSPObject {

	TSPObject* _viewStateRoot;

}

@property (nonatomic,retain) TSPObject * viewStateRoot;              //@synthesize viewStateRoot=_viewStateRoot - In the implementation block
+(id)viewStateWithRoot:(id)arg1 context:(id)arg2 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setViewStateRoot:(TSPObject *)arg1 ;
-(id)initWithViewStateRoot:(id)arg1 context:(id)arg2 ;
-(TSPObject *)viewStateRoot;
-(void)dealloc;
@end

