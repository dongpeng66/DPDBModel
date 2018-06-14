//
//  DPDBHelper.h
//  DPDBModel
//
//  Created by 人众 on 2018/6/14.
//

#import <Foundation/Foundation.h>
#import "FMDB.h"
@interface DPDBHelper : NSObject
@property (nonatomic, retain, readonly) FMDatabaseQueue *dbQueue;

+ (DPDBHelper *)shareInstance;

+ (NSString *)dbPath;

- (BOOL)changeDBWithDirectoryName:(NSString *)directoryName;
@end
