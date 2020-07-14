pub fn build_proverb(list: &[&str]) -> String {
    let mut proverb = vec![];

    for words in list.windows(2) {
        let current = words[0];
        let next = words[1];
        proverb.push(format!("For want of a {} the {} was lost.", current, next));
    }

    if let Some(first_word) = list.first() {
        proverb.push(format!("And all for the want of a {}.", first_word))
    }

    proverb.join("\n")
}
