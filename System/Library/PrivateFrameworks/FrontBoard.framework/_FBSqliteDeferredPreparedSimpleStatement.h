/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/_FBSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _FBSqliteDeferredPreparedSimpleStatement : _FBSqlitePreparedSimpleStatement {

	NSString* _deferredSql;

}
-(void)dealloc;
-(id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

