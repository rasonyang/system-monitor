//
//  ListInfo.h
//  ListInfo
//
//  Created by Ren, Alice on 7/24/14.
//
//

#import <Foundation/Foundation.h>
//#import "otherHeaders.h"

@interface ConnectionInfo : NSObject

NSMutableArray* getActiveConnections(uint32_t proto, char *name, int af);
- (void) printTCPConnections:(BOOL) simple;
- (void) printUDPConnections:(BOOL) simple;
- (void) prettyPrintFromArrayOfDictionaries:(NSArray *)connections;

@end
