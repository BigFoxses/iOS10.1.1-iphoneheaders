/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, NSMutableDictionary, NSMutableSet, HDSQLiteDatabase, NSNumber, NSSet;

@interface HDDataEntityDeletionContext : NSObject {

	HDProfile* _profile;
	NSMutableDictionary* _deleteStatementsByClassName;
	NSMutableDictionary* _deletedObjectProvenanceIDsByOriginalProvenanceID;
	NSMutableSet* _deletedObjectTypeSet;
	BOOL _insertDeletedObjects;
	HDSQLiteDatabase* _database;
	/*^block*/id _recursiveDeleteAuthorizationBlock;
	NSNumber* _lastInsertedDeletedObjectPersistentID;
	unsigned long long _deletedObjectCount;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                                   //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) id recursiveDeleteAuthorizationBlock;                              //@synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock - In the implementation block
@property (assign,nonatomic) BOOL insertDeletedObjects;                                       //@synthesize insertDeletedObjects=_insertDeletedObjects - In the implementation block
@property (nonatomic,readonly) NSNumber * lastInsertedDeletedObjectPersistentID;              //@synthesize lastInsertedDeletedObjectPersistentID=_lastInsertedDeletedObjectPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedObjectTypeSet;                             //@synthesize deletedObjectTypeSet=_deletedObjectTypeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long deletedObjectCount;                         //@synthesize deletedObjectCount=_deletedObjectCount - In the implementation block
-(void)finish;
-(HDSQLiteDatabase *)database;
-(id)initWithProfile:(id)arg1 database:(id)arg2 ;
-(BOOL)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3 ;
-(void)setInsertDeletedObjects:(BOOL)arg1 ;
-(void)setRecursiveDeleteAuthorizationBlock:(id)arg1 ;
-(BOOL)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id*)arg7 ;
-(NSNumber *)lastInsertedDeletedObjectPersistentID;
-(unsigned long long)deletedObjectCount;
-(NSSet *)deletedObjectTypeSet;
-(BOOL)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id*)arg4 ;
-(id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id*)arg2 ;
-(id)recursiveDeleteAuthorizationBlock;
-(BOOL)insertDeletedObjects;
@end
