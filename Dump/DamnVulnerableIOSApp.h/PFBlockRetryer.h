/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PFBlockRetryer : XXUnknownSuperclass {
	int attemptsMade;
	int maxAttempts;
	double delay;
	id block;
}
+(void)setInitialDelay:(double)delay;
+(id)retryBlock:(id)block forAttempts:(int)attempts;
-(id)go;
-(void)dealloc;
-(id)initWithBlock:(id)block forAttempts:(int)attempts;
@end

