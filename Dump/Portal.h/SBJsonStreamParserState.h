/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBJsonStreamParserState : XXUnknownSuperclass {
}
+(id)sharedInstance;
-(BOOL)isError;
-(id)name;
-(BOOL)needKey;
-(void)parser:(id)parser shouldTransitionTo:(int)to;
-(int)parserShouldReturn:(id)parser;
-(BOOL)parser:(id)parser shouldAcceptToken:(int)token;
@end

