/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserState.h"


@interface SBJsonStreamParserStateArrayNeedValue : SBJsonStreamParserState {
}
+(id)sharedInstance;
-(void)parser:(id)parser shouldTransitionTo:(int)to;
-(BOOL)parser:(id)parser shouldAcceptToken:(int)token;
-(id)name;
@end

