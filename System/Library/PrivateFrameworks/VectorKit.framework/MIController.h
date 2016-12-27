/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKMapViewDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, VKMapView, NSString;

@interface MIController : NSObject <VKMapViewDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	VKMapView* _mapView;
	shared_ptr<MITManager>* _mitManager;
	BOOL _isActive;

}

@property (nonatomic,readonly) BOOL isActive;                       //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(BOOL)isActive;
-(void)activateController:(id)arg1 ;
-(void)deactivateController;
-(void)handleXPCEvent:(id)arg1 ;
-(void)recievedData:(id)arg1 ;
-(void)sendData:(id)arg1 ;
-(void)decodeMITreeData:(id)arg1 ;
-(BOOL)takeMITSnapshot:(out id*)arg1 ;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2 ;
@end
