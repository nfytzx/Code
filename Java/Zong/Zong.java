package Java.Zong;
import java.util.Scanner;
public class Zong { public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] scores = new int[3][4];
        int totalSum = 0;
        int maxScore = -1; 
        int minScore = 101;
        int[] groupSums = new int[3];
        
        System.out.println("====== 请输入班级成绩 ======");
        for (int i = 0; i < scores.length; i++) {
            System.out.println("请输入第 " + (i + 1) + " 组的成绩：");
            for (int j = 0; j < scores[i].length; j++) {
                System.out.print("  第 " + (j + 1) + " 名学生成绩: ");
                scores[i][j] = scanner.nextInt();
            }
        }
        
        System.out.println("\n====== 成绩遍历展示及分级 ======");
        for (int i = 0; i < scores.length; i++) {
            System.out.print("第 " + (i + 1) + " 组: ");
            for (int j = 0; j < scores[i].length; j++) {
                int score = scores[i][j];
                String grade;
                if (score >= 90) {
                    grade = "优秀";
                } else if (score >= 80) {
                    grade = "良好";
                } else if (score >= 60) {
                    grade = "及格";
                } else {
                    grade = "不及格";
                }
                
                System.out.print(score + "(" + grade + ")  ");

                if (score > maxScore) maxScore = score;
                if (score < minScore) minScore = score;

                totalSum += score;
                groupSums[i] += score;
            }
        }

        System.out.println("\n====== 各组平均分 ======");
        for (int i = 0; i < 3; i++) {
            double groupAvg = (double) groupSums[i] / 4; 
            System.out.printf("第 %d 组的平均分: %.2f\n", (i + 1), groupAvg);
        }

        double overallAvg = (double) totalSum / 12; 
   
        System.out.println("\n====== 不及格学生名单 ======");
        boolean hasFail = false;
        for (int i = 0; i < scores.length; i++) {
            for (int j = 0; j < scores[i].length; j++) {
                if (scores[i][j] < 60) {
                    System.out.println("第 " + (i + 1) + " 组，第 " + (j + 1) + " 名学生，成绩: " + scores[i][j] + " 分");
                    hasFail = true;
                }
            }
        }
  
        System.out.println("\n====== 最终统计结果汇总 ======");
        System.out.println("全班最高分: " + maxScore);
        System.out.println("全班最低分: " + minScore);
        System.out.println("全班总分  : " + totalSum);
        System.out.printf("全班平均分: %.2f\n", overallAvg);
        
        scanner.close(); 
    }
}
