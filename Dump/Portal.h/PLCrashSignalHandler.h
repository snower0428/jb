/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"


@interface PLCrashSignalHandler : XXUnknownSuperclass {
@private
	darwin_sigaltstack _sigstk;
}
+(id)sharedHandler;
-(BOOL)registerHandlerWithCallback:(/*function-pointer*/ void*)callback context:(void*)context error:(id*)error;
-(BOOL)registerHandlerForSignal:(int)signal error:(id*)error;
-(id)init;
@end

