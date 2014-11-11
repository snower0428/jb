/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSFetchedResultsControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface MQPCDUserDefault : XXUnknownSuperclass <NSFetchedResultsControllerDelegate> {
@private
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
}
@property(retain, nonatomic) NSPersistentStoreCoordinator* persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel* managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext* managedObjectContext;
+(id)shared;
-(id)applicationDocumentsDirectory;
-(id)persistentStoreCoordinatorGlobal;
-(id)managedObjectModelGlobal;
-(void)saveContext;
-(id)queryValueDataFromUserDefault:(id)userDefault;
-(void)deleteUserDefaultEntity;
-(void)deleteKeyFromUserDefault:(id)userDefault;
-(void)addKeyValueToUserDefault:(id)userDefault value:(id)value;
-(void)dealloc;
-(id)init;
@end
