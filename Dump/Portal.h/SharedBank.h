/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UICKeyChainStore;

@interface SharedBank : XXUnknownSuperclass {
@private
	UICKeyChainStore* _keychain;
}
@property(retain) UICKeyChainStore* keychain;
-(void).cxx_destruct;
-(void)clear;
-(id)getData;
-(BOOL)saveData:(id)data;
@end

