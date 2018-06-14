//
//  User.h
//  DPDBModel
//
//  Created by 人众 on 2018/6/14.
//

#import "DPDBModel.h"

@interface User : DPDBModel

/** 账号 */
@property (nonatomic, copy)     NSString                    *account;
/** 名字 */
@property (nonatomic, copy)     NSString                    *name;
/** 性别 */
@property (nonatomic, copy)     NSString                    *sex;
/** 头像地址 */
@property (nonatomic, copy)     NSString                    *portraitPath;
/** 图片 */
@property (strong, nonatomic)   NSData                      *imageData;
/** 手机号码 */
@property (nonatomic, copy)     NSString                    *moblie;
/** 简介 */
@property (nonatomic, copy)     NSString                    *descn;
/** 年龄 */
@property (nonatomic, assign)  int                          age;

@property (nonatomic, assign)   long long                   createTime;

@property (nonatomic, assign)   int                        height;

@property (nonatomic, assign)   int                        field1;

@property (nonatomic, assign)   int                        field2;
@end
