/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDKeychainBindings, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDKeychainBindingsController : XXUnknownSuperclass {
	PDKeychainBindings* _keychainBindings;
	NSMutableDictionary* _valueBuffer;
}
+(id)sharedKeychainBindingsController;
-(void).cxx_destruct;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(id)valueForKeyPath:(id)keyPath;
-(id)values;
-(id)keychainBindings;
-(BOOL)storeString:(id)string forKey:(id)key;
-(id)stringForKey:(id)key;
-(id)serviceName;
@end
