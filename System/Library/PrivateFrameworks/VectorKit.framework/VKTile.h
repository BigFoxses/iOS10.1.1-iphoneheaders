/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKTilePool;

@interface VKTile : NSObject {

	VKTileKey _key;
	Matrix<double, 4, 4> _matrix;
	Matrix<double, 4, 4> _inverseMatrix;
	VKTilePool* _pool;
	double _birthdate;
	VKCameraState _cameraState;
	Box<double, 2> bounds;
	Matrix<float, 4, 4> _shaderMatrix;
	shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* _viewConstantData;

}

@property (nonatomic,readonly) VKTileKey key;                                                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) double birthdate;                                                          //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,readonly) const Matrix<double* matrix; 
@property (nonatomic,readonly) const Matrix<double* inverseMatrix; 
@property (nonatomic,readonly) const Matrix<float* shaderMatrix; 
@property (nonatomic,readonly) double tileWidth; 
@property (readonly) shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* viewConstantData; 
-(void)dealloc;
-(id)description;
-(VKTileKey)key;
-(void)setKey:(VKTileKey)arg1 ;
-(const Matrix<double*)matrix;
-(const Matrix<double*)inverseMatrix;
-(const Matrix<float*)shaderMatrix;
-(const VKTileKey*)keyPointer;
-(void)setPool:(id)arg1 ;
-(double)tileWidth;
-(unsigned long long)geometryCount;
-(void)updateViewDependentStateIfNecessaryWithContext:(LayoutContext*)arg1 ;
-(void)updateViewDependentStateWithContext:(LayoutContext*)arg1 ;
-(shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >*)viewConstantData;
-(id)initWithKey:(const VKTileKey*)arg1 ;
-(double)birthdate;
@end
