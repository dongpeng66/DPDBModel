//
//  ViewController.m
//  DPDBModel
//
//  Created by 人众 on 2018/6/14.
//

#import "ViewController.h"
#import "User.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}
-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
//    for (int i = 0; i < 100; i++) {
//        User *user = [[User alloc] init];
//        user.name = [NSString stringWithFormat:@"麻子%d",i];
//        user.sex = @"男";
//        user.age = 10+i;
//        user.createTime = 1368082020;
//        dispatch_async(dispatch_get_global_queue(0, 0), ^{
//            [user save];
//        });
//    }
    [User clearTable];
     NSLog(@"全部:%@",[User findAll]);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
