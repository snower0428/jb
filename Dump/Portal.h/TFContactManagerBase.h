/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFContactLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSError, NSObject, NSMutableDictionary;
@protocol TFContactManagerBaseDelegate;

@interface TFContactManagerBase : XXUnknownSuperclass <TFContactLoaderDelegate> {
	int _managerType;
	NSMutableArray* _indexCharAry;
	NSMutableDictionary* _contactsDict;
	NSObject* _delegateSyncObject;
	BOOL _loadCancel;
	BOOL _isLoading;
	id<TFContactManagerBaseDelegate> _contactDelegate;
@private
	int _loadRet;
	NSError* failedError;
}
@property(assign, nonatomic) int managerType;
@property(assign, nonatomic) __weak id<TFContactManagerBaseDelegate> contactDelegate;
@property(retain, nonatomic) NSError* failedError;
@property(assign, nonatomic) int loadRet;
@property(assign, nonatomic) BOOL isLoading;
@property(assign, nonatomic) BOOL loadCancel;
@property(retain, nonatomic) NSObject* delegateSyncObject;
@property(retain, nonatomic) NSMutableDictionary* contactsDict;
@property(retain, nonatomic) NSMutableArray* indexCharAry;
-(void).cxx_destruct;
-(id)findContactsWithKeyWords:(id)keyWords inKeys:(id)keys;
-(id)contactInfoInKey:(id)key;
-(void)resetRedAreaTag;
-(BOOL)isSameContactInfo:(id)info secendPhones:(id)phones;
-(void)addContact:(id)contact forKey:(id)key toDictionary:(id)dictionary;
-(int)totalOfContacts;
-(void)stopLoadContact;
-(void)startLoadContact;
-(void)sortIndexCharAry;
-(BOOL)noContactInfo;
-(void)loadMobileContactCompleted;
-(void)publishLoadStart;
-(id)initWithManagerDelegate:(id)managerDelegate;
@end

